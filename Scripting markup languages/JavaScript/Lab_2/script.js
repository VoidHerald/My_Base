function TaskTwo(){
        const x = prompt('Введите ширину X');
        const y = prompt('Введите высоту Y');
        let newWindow=window.open();
        newWindow.document.write("<table border='5xp solid' cellpadding='10em' >");
        for (let i = 1; i <= y ; i++) {
            newWindow.document.write("<tr>");

            for (let q = 1; q <= x; q++) {
                newWindow.document.write("<td bgcolor='#00ffa0'>" + (i * q)+"</td>");
            }
            newWindow.document.write("</tr>");
        }
        newWindow.document.write("</table>");
}
function TaskThree() {
    let string_a=prompt('Введите начальное значение A');
    let string_b=prompt('Введите конечное значение B');
    let a = Number(string_a);
    let b = Number(string_b);
    let newWindow=window.open();
    newWindow.document.write("<style type='text/css'>" +
        "table{" +
        "text-align:center;" +
        "background-color:lightcoral;" +
        "border: 5px solid crimson;" +
        ""+
        "}"+
        "td{" +
        "color: teal;" +
        "border: 1px solid indianred;"+
        "}"
        +"</style>")
    newWindow.document.write("<table  cellpadding='6em'>");
    newWindow.document.write("<thead><td>Радиус</td><td>Площадь <br> Круга</td>/" +
        "<td>Длинна <br> окружности</td></thead>");
    do
    {
        newWindow.document.write("<tr>");
        newWindow.document.write("<td>"+Math.round(Number(a))+"</td>");
        newWindow.document.write("<td>"+(Math.round(2*Number(a)*Math.PI))+"</td>");
        newWindow.document.write("<td>"+(Math.round(Math.pow(Number(a),2)*Math.PI))+"</td>");
        newWindow.document.write("</tr>");
        a+=0.3;
    }
    while(a<=b);

    newWindow.document.write("</table>");
}

function TaskFour(){
    x1=new Number('987543.123456');
    x2=new Number('99');
    let newWindow=window.open();
    newWindow.document.write("<style>" +
        "table{" +
        "text-align:center;" +
        "background-color:lightcoral;" +
        "border: 5px solid crimson;" +
        "font-size: large;"+
        "}"+
        "td{" +
        "color: teal;" +
        "border: 1px solid indianred;"+
        "}"
        +"</style>")
    newWindow.document.write("<table>");
    newWindow.document.write("<tr><td>Число</td><td>Метод</td><td>Результат</td><td>Описание метода</td></tr>");

    newWindow.document.write("<tr><td>"+x1+"</td><td rowspan='2'>toExponential</td><td>"+x1.toExponential(3)+"</td><td rowspan='2'>Число в экспоненциальной форме<br>(параметр - число цифр после запятой)</td></tr>");
    newWindow.document.write("<tr><td>"+x2+"</td><td>"+x2.toExponential(3)+"</td></tr>");

    newWindow.document.write("<tr><td>"+x1+"</td><td rowspan='2'>toFixed()</td><td>"+x1.toFixed(2)+"</td><td rowspan='2'>Фиксированное кол-во цифр после запятой</td></tr>");
    newWindow.document.write("<tr><td>"+x2+"</td><td>"+x2.toFixed(2)+"</td></tr>");

    newWindow.document.write("<tr><td>"+x1+"</td><td rowspan='2'>toPrecision</td><td>"+x1.toPrecision(3)+"</td><td rowspan='2'>Представление числа с заданным общим количеством значащих цифр</td></tr>");
    newWindow.document.write("<tr><td>"+x2+"</td><td>"+x2.toPrecision(3)+"</td></tr>");

    newWindow.document.write("<tr><td>"+x1+"</td><td rowspan='2'>toString</td><td>"+x1.toString(2)+"</td><td rowspan='2'>Строк. представление числа в двоичной форме</td></tr>");
    newWindow.document.write("<tr><td>"+x2+"</td><td>"+x2.toString(2)+"</td></tr>");

    newWindow.document.write("<table>");
}