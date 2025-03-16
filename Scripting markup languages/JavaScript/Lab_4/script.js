function Grup(n, spec, number) {
    this.n = n;
    this.spec = spec;
    this.number = number;


    this.sub_stud = function sub_stud(k) {
        this.number -= k;
        document.write('Из группы ' + this.n + ' убрали ' + k + ' студентов.<br\>');
    }

    this.add_stud = function add_stud(k) {
        this.number += k;
        document.write('В группу ' + this.n + ' добавили ' + k + ' студентов.<br\>');
    }
}
function Student(name, surname, physics, math, computer_science) {
    this.name = name;
    this.surname = surname;
    this.physics = physics;
    this.math = math;
    this.computer_science = computer_science;
    this.output=function output(){
        let MY_W=window.open('','','width=200,height=100');MY_W.focus();
        let num=(math+physics+computer_science)/3;
        MY_W.document.write("Имя: "+this.name+"<br>"+"Фамилия: "+this.surname+"<br>"+"Средний балл: "+num);
    };
}


function TaskOne() {
    let gr1 = new Grup(1, 'ИСИТ', 28);
    let gr2 = new Grup(2, 'ПОИТ', 31);
    let gr3 = new Grup(3, 'КСИС', 27);
    let gr4 = new Grup(4, 'ПОИБМС', 31);

    document.write("<style>" +
        "table{" +
        "text-align:center;" +
        "background-color:lightcoral;" +
        "border: 5px solid crimson;" +
        "font-size: large;" +
        "}" +
        "td{" +
        "color: teal;" +
        "border: 1px solid indianred;" +
        "}"
        + "</style>")

    document.write("|||||||||||||||||||||||||||||||ДО ИЗМЕНЕНИЯ||||||||||||||||||||||||||||||||||||||<br>");
    document.write("<table>");
    document.write("<tr><td>Номер</td><td>Специальность</td><td>Размер ч.</td><td>Курс</td></tr>");
    document.write("<tr><td>" + 1 + "</td><td>" + gr1.spec + "</td><td>" + gr1.number + "</td><td>" + gr1.kurs + "</td></tr>");
    document.write("<tr><td>" + 2 + "</td><td>" + gr2.spec + "</td><td>" + gr2.number + "</td><td>" + gr2.kurs + "</td></tr>");
    document.write("<tr><td>" + 3 + "</td><td>" + gr3.spec + "</td><td>" + gr3.number + "</td><td>" + gr3.kurs + "</td></tr>");
    document.write("<tr><td>" + 4 + "</td><td>" + gr4.spec + "</td><td>" + gr4.number + "</td><td>" + gr4.kurs + "</td></tr>");
    document.write("</table>");


    Grup.prototype.kurs = 0;
    gr1.kurs = 2;
    gr2.kurs = 1;
    gr3.kurs = 1;
    gr4.kurs = 3;

    gr3.add_stud(5);
    gr4.add_stud(1);
    gr1.sub_stud(4);
    gr2.sub_stud(8);


    document.write("||||||||||||||||||||ПОСЛЕ ИЗМЕНЕНИЯ||||||||||||||||||||||||||||<br>");
    document.write("<table>");
    document.write("<tr><td>Номер</td><td>Специальность</td><td>Размер ч.</td><td>Курс</td></tr>");
    document.write("<tr><td>" + 1 + "</td><td>" + gr1.spec + "</td><td>" + gr1.number + "</td><td>" + gr1.kurs + "</td></tr>");
    document.write("<tr><td>" + 2 + "</td><td>" + gr2.spec + "</td><td>" + gr2.number + "</td><td>" + gr2.kurs + "</td></tr>");
    document.write("<tr><td>" + 3 + "</td><td>" + gr3.spec + "</td><td>" + gr3.number + "</td><td>" + gr3.kurs + "</td></tr>");
    document.write("<tr><td>" + 4 + "</td><td>" + gr4.spec + "</td><td>" + gr4.number + "</td><td>" + gr4.kurs + "</td></tr>");
    document.write("</table>");
}

function TaskTwo() {

    let st1 = new Student("Мартынко", "Иван", 7, 7, 4);
    let st2 = new Student("Крупина", "Никита", 10, 10, 10);
    let st3 = new Student("Бритько", "Кирилл", 4, 5, 6);


    Student.prototype.Propiska = "None";

    st1.Propiska = "Minsk";
    st2.Propiska = "Brest";
    st3.Propiska = "Smolensk";

    document.write("Студент №1", "(__)", st1.name, "(__)", st1.surname, "(__)", st1.physics, "(__)", st1.math, "(__)", st1.computer_science, "(__)", st1.Propiska,"<br>");
    document.write("Студент №2", "(__)", st2.name, "(__)", st2.surname, "(__)", st2.physics, "(__)", st2.math, "(__)", st2.computer_science, "(__)", st2.Propiska,"<br>");
    document.write("Студент №3", "(__)", st3.name, "(__)", st3.surname, "(__)", st3.physics, "(__)", st3.math, "(__)", st3.computer_science, "(__)", st3.Propiska,"<br>");

    st1.output();


    document.write("|||||||||||||||||||||||||||||||||3_Задание|||||||||||||||||||||||||||||||||||||||||||"+"<br>");

    document.write("Сейчас проверит наличие свойства Propiska в обьекте st1 "+("Propiska" in st1),"<br>");
    document.write("Сейчас проверит наличие свойства Gimm  в обьекте st3 "+("Gimm" in st3),"<br>");

    delete st2.name;
    delete st2.math;
    delete st3.surname;
    delete st3.physics;
    delete st1.computer_science;

    document.write("Мы удалили некотторые свойства из обьектов"+"<br>");
    document.write("Студент №1", "(__)", st1.name, "(__)", st1.surname, "(__)", st1.physics, "(__)", st1.math, "(__)", st1.computer_science, "(__)", st1.Propiska,"<br>");
    document.write("Студент №2", "(__)", st2.name, "(__)", st2.surname, "(__)", st2.physics, "(__)", st2.math, "(__)", st2.computer_science, "(__)", st2.Propiska,"<br>");
    document.write("Студент №3", "(__)", st3.name, "(__)", st3.surname, "(__)", st3.physics, "(__)", st3.math, "(__)", st3.computer_science, "(__)", st3.Propiska,"<br>");
}

function TaskThree() {

    let Arr1=["pow","pop","push","shift","round","floor","sline","sort"];
    for(let i=0;i<=7;i++){
        document.write("Элемент массива Arr1 № "+i+"= "+Arr1[i]+"<br><br>")
    }


    document.write("<br>Удаляем парочку элементов массива c индексами 2 и 7","<br><br><br>")
    delete Arr1[2];
    delete Arr1[7];

    for(let i=0;i<=7;i++){
        document.write("Элемент массива Arr1 № "+i+"= "+Arr1[i]+"<br><br>")
    }
    document.write("<br><br><br>")

    let someString="Hello I Am a string"
    function f12() {}

    let st1 = new Student("Мартынко", "Иван", 7, 7, 4);
    let st2 = new Student("Крупина", "Никита", 10, 10, 10);
    let st3 = new Student("Бритько", "Кирилл", 4, 5, 6);

    document.write("Проверяем является ли Arr1 массивом   - "+(Arr1 instanceof Array),"<br><br>");
    document.write("Проверяем является ли обьект Student массивом   - "+(Student instanceof Array),"<br><br>");
    document.write("Проверяем является ли обьект Student обьектом   - "+(Student instanceof Object),"<br><br>");
    document.write("Проверяем является ли строка someString строкой (instanceof)   - "+(someString instanceof String),"<br><br>");
    document.write("Проверяем является ли строка someString строкой (typeof) - "+(typeof someString),"<br><br>");
    document.write("Пустая функция f12{} возвращает: ",f12(),"<br><br>");
    document.write("Выводить тип  Arr1 ",typeof Arr1,"<br><br>");
    document.write("Выводить тип bb ",typeof someString,"<br><br>");
    document.write("Выводить тип  Student ",typeof Student,"<br><br>");
    document.write("Выводить тип   Arr1[1] ",typeof Arr1[1],"<br><br>");
    document.write("Выводить тип '1' ",typeof "1","<br><br>");
    document.write("Выводить тип  st1 ",typeof st1,"<br><br>");
    document.write("Выводить тип  st1.math ",typeof st1.math,"<br><br>");
    document.write("Выводить тип  st1.name ",typeof st1.name,"<br><br>");
    document.write("Выводить тип  st1.name ",typeof f12,"<br><br>");
}
