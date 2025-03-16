
function TaskOne() {
    alert("Вас приветствует учебный центр");
    let promptName=prompt("Введите имя","Вводить тут");
    alert("Добро пожаловать на наши курсы "+promptName);
    let decision=confirm("Хотите стать Web-дизайнером?")
    if(decision){
        alert("Учите стили CSS и JavaScript!");
    }
    else{
        alert("Упускаете время!");
    }

}

function TaskTwo(){
    document.write("Складываю числа: 1 + 1 = "  +  ( 1 + 1 ) + "<br>" );
    document.write("Складываю строки: 1 + 1 = " +  ( '1' + '1' ) + "<br>" );
    document.write("Складываю число и строку: 1 + 1 = " +  ( 1 + '1' ) + "<br>" );
    document.write("Складываю строку и число: 1 + 1 = " +  ( '1' + 1 ) + "<br>" );
    document.write("Вывод - Результатом сложения строки и числа всегда будет строка");
}

function TaskThree() {
    let x = 37;
    let y =11.5;
    let expression_1= (35*y-25*x)/5+232;
    let expression_2=  8*y/x+5*x/y-43;
    document.write("Выражение:  35y-25x)/5+232 = " + expression_1+ "<br>" );
    document.write("Выражение: 8*y/x+5*x/y-43 = "  + expression_2 + "<br>" );
    document.write("Остаток от деления exp1 % exp2 = "  + expression_1%expression_2 + "<br>" );
}


function TaskFour(){
    let enteredNumber=prompt("Введите число","11");
    if((enteredNumber < 20 || enteredNumber > 40) && (enteredNumber!=15) && (enteredNumber%5==0))
        alert("Правильное значение");
    else{
        alert("Не правильное значение");
    }
    let newWindow=window.open();
    newWindow.document.write("Оператор '==' : 10/5 == 20/10   - " + (10/5 == 20/10) + "<br>" );
    newWindow.document.write("Оператор '!=' : 10/5 != 20/5   - " + (10/5 != 20/5) + "<br>" );
    newWindow.document.write("Оператор '>' : 'String' > 'STRING'   - " + ("String" > "STRING") + "<br>" );
    newWindow.document.write("Оператор '>=' : 'String' >= 7   - " + ("String" >= 7) + "<br>" );
    newWindow.document.write("Оператор '<' : 9.9999999999 < 10   - " + (9.9999999999 < 10) + "<br>" );
    newWindow.document.write("Оператор '<=' : 1.0000000000000001 <= 1   - " + (1.0000000000000001 <= 1) + "<br>" );
    newWindow.document.write("Оператор '!' : !(true||false)   -" + !(true||false) + "<br>" );
    newWindow.document.write("Оператор && :  !( && 0)   - " + !( '1' && false ) + "<br>" );
    newWindow.document.write("Оператор '||' : ('yes' || (\"\" && 0))  -" + ('yes' || ("" && 0)) + "<br>" );
}

function TaskFive(){
    let number1 = prompt("Введите число 1 : ");
    let number2 =prompt("Введите число 2 : ");
    if(number1>number2){
        alert("Число 1 больше числа 2");
    }
    else if(number1<number2){
        alert("Число 2 больше числа 1")
    }
    else {
        alert("Они равны")
    }
}

function TaskSix(){
   const today=new Date();
     switch(today.getDay())
     {
         case 1: alert("Сегодня Понедельник!");
         case 2: alert("Сегодня Вторник!");
         case 2: alert("Сегодня Среда!");
         case 2: alert("Сегодня Четверг!");
         case 2: alert("Сегодня Пятница!");
         case 2: alert("Сегодня Суббота!");
         case 2: alert("Сегодня Воскресенье!");
     }
}

function TaskSeven(){
    alert("Вывожу число в 16-ричной системе счисления помещающееся в 1 байте: " + 0xFF);
    alert("Вывожу число в 2-ичной системе счисления помещающееся в 1 байте: " + 0b11111111);
    alert("Вывожу число в 8-ричной системе счисления: "+ 0o777);
}

function  TaskEight(){
    try{
        alert("Создаём ошибку:");
        //alert("Создаём конфликтную ситуацию :  "  +  0/0);
        fdfdfdf
    }
    catch (err){
        alert("ОШИБКА : "  +  err);
    }

}