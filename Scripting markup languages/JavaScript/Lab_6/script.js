let dopWin;
function myWindowOpen(){dopWin = window.open( "", "MyWin", "width=500px,height=500px");}

function myWindowClose(){dopWin.window.close();}

function Infoform(){
    document.write("<table border>");
    document.write("<tr>"+"<td>"+"Вся информация</td><td>"+navigator.userAgent+"</td><tr>");
    document.write("<tr>"+"<td>"+"Версия браузера</td><td>"+navigator.appVersion+"</td><tr>");
    document.write("<tr>"+"<td>"+"Название браузера</td><td>"+navigator.appName+"</td><tr>");
    document.write("<tr>"+"<td>"+"Параметры OC</td><td>"+navigator.platform+"</td><tr>");
    document.write("<tr>"+"<td>"+"Включен ли джава</td><td>"+navigator.javaEnabled()+"</td><tr>");
    document.write("<tr>"+"<td>"+"Длинна экрана</td><td>"+screen.width+"</td><tr>");
    document.write("<tr>"+"<td>"+"Ширина экрана</td><td>"+screen.height+"</td><tr>");
    document.write("<tr>"+"<td>"+"Глубина цвета</td><td>"+screen.colorDepth+"</td><tr>");
    document.write("<tr>"+"<td>"+"Количество посещенных URL</td><td>"+history.length+"</td><tr>");
    document.write("<tr>"+"<td>"+"URL текущего документа целиком</td><td>"+location.href+"</td><tr>");
    document.write("<tr>"+"<td>"+"Путь к загруженному документу</td><td>"+location.pathname+"</td><tr>");
    document.write("<tr>"+"<td>"+"Имя домена загруженного документа</td><td>"+location.host+"</td><tr>");
    document.write("</table>");
    document.write("<div>"+navigator.userAgent+"<div>"+"<br>");
    document.write("<div>"+navigator.appVersion+"<div>");}

function AddSomeText(){dopWin.window.document.write("<span>Добавим немного текста</span>"+"<br>");}

function TextDelition(){
    let spans=dopWin.window.document.getElementsByTagName("span");
    let spans2=dopWin.window.document.getElementsByTagName("span");
    for(let elem in spans2){
        elem.remove()
    }
    /*
    for(let i=0;i<spans.length;i++){
        spans.item(i).remove();
    }
    */
}
