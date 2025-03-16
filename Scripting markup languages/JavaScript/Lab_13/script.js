/*
Задание 1. Создать массив со случайными числами. Проверить, имеется
ли у массива n-й элемент, введённый пользователем. Результат вывести на
экран.

Задание 2. Создать массив со случайными числами и со значением NaN.
Проверить, имеется ли у массива элемент NaN с помощью InsteadOf и
Array.prototype.includes. Результат вывести на экран.

Задание 3. Создать несколько массивов со случайными символами.
Проверить, имеется ли у массивов введённый пользователем символ.
Результат вывести на экран.

Задание 4. Найти значение арифметических выражений. Использовать
инфиксный оператор возведения в степень. Результат округлить до целого и
вывести на экран.
Пример 1. 12342*23/5+234
Пример 2. 28*7652/5*432
Пример 3. 37346-(4346+10244)/5
Пример 4. 654335-965732
Пример 5. (100010+10000010)/10000
*/

let myArray1=new Array(15);
for(let i=0;i<15;i++){
    myArray1[i]=Math.floor(Math.random()*15)
}
function  askForElem() {
    //let OneWindow= window.open("DrugImage.html","TaskOneWindow","width=500,height=500")
    let myPrompt=prompt("Проверка наличия элемента :");
    alert(`Элемент ${myArray1.includes(Number(myPrompt))?"присудствует":"отсутствует"} в массиве`)
}




let myArray2=new Array(15);
for(let i=0;i<15;i++){
    myArray2[i]=Math.floor(Math.random()*15)
}

myArray2[Math.floor(Math.random()*14)]=NaN;
function askTypes() {
    //let OneWindow=window.open("RectilinearMotion.html","TaskTwoWindow","width=1000,height=500")
    alert(`
    Проверка с помощю instanseof : ${NaN instanceof myArray2}\n
    Проверка с помощю includes : ${myArray2.includes(NaN)}\n`)
}




let defString="QWERTYUIOPASDFGHJKLZXCVVBNM";
let charArray1=new Array(15);
let charArray2=new Array(15);
let charArray3=new Array(15);

for(let i=0;i<15;i++) {
    charArray1[i] = defString[Math.floor(Math.random() * 27)];
    charArray2[i] = defString[Math.floor(Math.random() * 27)];
    charArray3[i] = defString[Math.floor(Math.random() * 27)];
}
function  AskForChar(){
    let askChar=prompt("Ведите символ (A-Z) : ")
    alert(`
    Символ ${askChar} ${charArray1.includes(askChar)?"присудствует":"отсутствует"} в 1 массиве\n
    Символ ${askChar} ${charArray2.includes(askChar)?"присудствует":"отсутствует"} в 2 массиве\n
    Символ ${askChar} ${charArray3.includes(askChar)?"присудствует":"отсутствует"} в 3 массиве`)
}

function  infixOperator(){
    alert(`
    Пример 1. 1234**2*23/5+234 = ${Math.floor((1234**2)*23/5+234)}\n
    Пример 2. 28*765**2/5*432 = ${Math.floor(28*765**2/5*43**2)}\n
    Пример 3. 37346-(4346+10244)/5 = ${Math.floor(3734**6-(434**6+1024*4)/5)}\n
    Пример 4. 654335-965732 = ${Math.floor(6543**34-965732)}\n
    Пример 5. (100010+10000010)/10000 = ${Math.floor((1000**10+100000**10)/10000)}`
    )
}

