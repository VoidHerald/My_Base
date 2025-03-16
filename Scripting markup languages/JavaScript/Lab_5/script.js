/*Задание 1. Вывести на экран все тэги и их номера в коллекции all своей
первой web-страницы.*/
function TaskOne(){
    let NewWindow=window.open("", "MyWin", "width=500px,height=1000px");
    NewWindow.document.write("<br>"+"Все элеметны коллекции all"+"<br>"+"<br>")

    let len = document.all.length;
    let fullPage=document.all;
    for (let i = 0; i < len ; i++){
        NewWindow.document.write("Элемент страницы ["+i+"] имеет имя тэга:"+fullPage[i].tagName + "<\/br>");}
}

function TaskTwo(){
    let NewWindow=window.open("","MyWin","width=500px,height=1000px");
    NewWindow.document.write("<br>"+"Все дочерние элементы тага body"+"<br>"+"<br>");

    let chlds = document.body.children;
    let len=chlds.length;
    for (let i = 0; i < len; i++){
        NewWindow.document.write("Элемент страницы ["+i+"] имеет имя тэга:"+chlds[i].tagName + "<\/br>");}
}

function TaskThree(){
    let NewWindow=window.open("","MyWin","width=500px,height=500px");
    let fullPage=document.all;

    NewWindow.document.write("Содержимое первого элемента span  через all =  ' "+
        document.getElementsByTagName("span")[0].innerHTML+" '");

    NewWindow.document.write("Содержимое первого элемента span через коллекцию span=  ' "+
        document.getElementsByTagName("span")[0].innerHTML+" '");

    NewWindow.document.write("Содержимое первого элемента span =  ' "+
        document.getElementsByTagName("span")[0].innerHTML+" '");

}

function TaskFour() {
    let NewWindow=window.open("","MyWin","width=500px,height=500px");
    let LastTableSpan =document.body.getElementsByTagName("tr")[5].getElementsByTagName("td");
    let sum=0;
    for(let i=0;i<LastTableSpan.length;i++){
        NewWindow.document.write("Клетка последней строки под номером "+i+" :"+LastTableSpan[i].innerText+"<br>");
        sum+=   Number(LastTableSpan[i].innerText);
    }
    NewWindow.document.write("Среднее арифметическое элементов последней строки : "+sum/3);
    let FirstSpan=document.getElementsByTagName("span")[0]
    FirstSpan.innerText=FirstSpan.innerText+sum/3;
}