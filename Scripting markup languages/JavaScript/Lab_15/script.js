/*Задание 1. Сделать так, чтобы точка в регулярных выражениях
соответствовала абсолютно всем символам, включая \n. (пересмотреть?)
Задание 2. Cделать поиск и замену многострочного вхождения:
заменить [u] … [/u] на тэг подчеркивания: <u>.
Задание 3. Заменить все открывающие тэги <a>.
Задание 4. Организовать перестановку слов в строках. Например,
изменить строку "firstName, lastName" на "lastName, firstName".
(Использовать строковый метод replace()). Результат вывести на экран.
Задание 5. Создать объект со свойствами. Удалите несколько свойств
с помощью rest. Результат вывести на экран.
Задание 6. Создать объект с помощью оператора spread. Удалить
несколько значений с помощью rest. Добавить своё Имя и Фамилию с
помощью spread. Результат вывести на экран.*/
function Test() {
    //До ECMAScript 2018
    let re1 = /(\d{4})-(\d{2})-(\d{2})/;
    let result1 = re1.exec('2015-01-02');
    alert(result1);

    //После
    let re2 = /(?<year>\d{4})-(?<month>\d{2})-(?<day>\d{2})/u;
    let result2 = re2.exec('2015-01-02');
    alert(result2);

    let Person = {fname: 'Kate', age: 18};
    let account = {name: 'Ban', amount: '$500'};
}


/*Задание 1. Сделать так, чтобы точка в регулярных выражениях
соответствовала абсолютно всем символам, включая \n. (пересмотреть?)*/

function Reg1()
{
    alert(`$C флагом s:\n ${/first.second/s.test('first\nsecond')} `);
    alert(`$Без флага s:\n ${/first.second/.test('first\nsecond')} `);
}

/*
Задание 2. Cделать поиск и замену многострочного вхождения:
заменить [u] … [/u] на тэг подчеркивания: <u>.
*/
function FindAndRepl(){

    /*
    let str='blabla [Hello world] blabla';
    console.log(str.slice(str.indexOf('[')+1,str.indexOf(']')));
    */

    let str="Hello my name --- [u] Top Secret [/u]";
    alert(`Изначальная строка: ${str}\n`);

    let exp= /(?<start>\[u\]) (?<content>.*) (?<end>\[\/u\])/u;
    let res=exp.exec(str);

    let a=str.replace(/\[u\].*\[\/u\]/,`<u>${res.groups.content}</u>`);
    alert(`Итоговая строка: ${a}\n`)
}

/*Задание 3. Заменить все открывающие тэги <a>.*/

function ReplAll()
{
    let str="JavaScript позволяет <a> назначить </a> каждой группе <a> в регулярных</a> выражениях определенное имя.";
    alert(`Изначальная строка: ${str}\n`);
    let exp=/<a>/g;
    let a=str.replace(exp,"(<a> Заменён)")
    alert(`Итоговая строка: ${a}\n`)
}

/*
Задание 4. Организовать перестановку слов в строках. Например,
изменить строку "firstName, lastName" на "lastName, firstName".
(Использовать строковый метод replace()). Результат вывести на экран.
*/

function Swap()
{
    let str="Я неправильно записал ИМЯ и ФАМИЛИЮ.";
    alert(`Изначальная строка: ${str}\n`);
    let name= /л (?<name>\D+) и/.exec(str);
    let lastname=/и (?<lastname>\D+)./.exec(str);
    str=str.replace(/(?<=(л ))\D+(?= и)/,lastname.groups.lastname)
    alert(str);
    str=str.replace(/(?<=(и ))\D+(?=.)/,name.groups.name)
    alert(str);
    //alert(`Итоговая строка: ${a}\n`)
}


/*
Задание 5. Создать объект со свойствами. Удалите несколько свойств
с помощью rest. Результат вывести на экран.
*/


function DelProp()
{
    let SomeObj={
        prop1:1, prop2:2, prop3:3, prop4:4, prop5:5,
    }
    let str="";
    for(let prop in SomeObj) {
        str+=`Свойство ${prop} имеет значение ${SomeObj[prop]}\n`
    }
    alert(str)
    let onlyProp1Prop2=({prop1,prop2,...rest})=>rest
    SomeObj=onlyProp1Prop2(SomeObj)

    str="";
    for(let prop in SomeObj) {
        str+=`Свойство ${prop} имеет значение ${SomeObj[prop]}\n`
    }
    alert(str)
}
/*Задание 6. Создать объект с помощью оператора spread. Удалить
несколько значений с помощью rest. Добавить своё Имя и Фамилию с
помощью spread. Результат вывести на экран.*/

function  Combo(){

    let SomeObj1={
        prop1:1, prop2:2, prop3:3,
    }
    let SomeObj2={
        prop4:4, prop5:5,prop6:6
    }
    let SomeObj3={...SomeObj1,...SomeObj2}


    let str="После обьединения двух обьектов\n";
    for(let prop in SomeObj3) {
        str+=`Свойство ${prop} имеет значение ${SomeObj3[prop]}\n`
    }
    alert(str)

    let delProps135=({prop3,prop5,prop1,...rest})=>rest
    SomeObj3=delProps135(SomeObj3);

    SomeObj3={...SomeObj3,myName:"Andrey",myLastName:"Zanko"}

    str="После добавления имени и фамилии\n";
    for(let prop in SomeObj3) {
        str+=`Свойство ${prop} имеет значение ${SomeObj3[prop]}\n`
    }
    alert(str)


}