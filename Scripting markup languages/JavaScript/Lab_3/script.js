function TaskOne() {
    let fun = [];
    fun[0] = 6 * Math.pow(Math.PI, 2) + 3 * Math.pow(Math.E, 8);
    fun[1] = 2 * Math.cos(4) + Math.cos(12) + 8 * Math.pow(Math.E, 3);
    fun[2] = 3 * Math.sin(9) + Math.LN10 + Math.sqrt(2);
    fun[3] = 2 * Math.tan(5) + 6 * Math.PI + Math.sqrt(12);
    let min = Math.min(fun[0], fun[1], fun[2], fun[3]);
    let max = Math.max(fun[0], fun[1], fun[2], fun[3]);
    document.write("Минимальное значение" + min + '<br>');
    document.write("Максимальное значение" + max + '<br>');
    for (let i = 0; i <= 3; i++) {
        if (fun[i] === min) document.write("Номер минимального элемента массива- " + i + '<br>')
        else {
            if (fun[i] === max) document.write("Номер максимального элемента массива- " + i + '<br>')
            else document.write("Пустая проверка" + i + '<br>')
        }
    }
}



function TaskTwo()
{
    let Arr0=["pow","pop","push","shift","round","floor","line","sort"];
    let Arr1=[[],[]]
    for(let i=0,m=0,a=0;i<=Arr0.length;i++){
        if(Arr0[i] in Math){
            Arr1[0][m++]=Arr0[i];
        }
        else {
            Arr1[1][a++]=Arr0[i];
        }
    }
    document.write("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"+"<br>");
    Arr1[0].push("abs")
    Arr1[1].splice(0,0,"concat");

    for(let i=0;i<Arr0.length;i++){document.write("Элемент массива Arr0 № "+i+"= "+Arr0[i]+"<br>")}
    document.write("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"+"<br>");

    for(let i=0;i<Arr1.length;i++){document.write("Элемент массива Arr1 № "+i+"= "+Arr1[i]+"<br>")}
    document.write("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"+"<br>");

    for(let i=0;i<Arr2.length;i++){document.write("Элемент массива Arr2 № "+i+"= "+Arr2[i]+"<br>")}

}


function TaskThree()
{
    let name= "Занько Андрей Владимирович";
    document.write("name= "+name+' <br>');
    document.write("nameWide= "+name.length+'<br>');
    document.write("UPPER= "+name.toUpperCase()+'<br>');
    document.write("LOWER= "+name.toLowerCase()+'<br>');
    name = name.replace(/[а-я]/g,'');
    document.write("name NEW= "+name+'<br>');
}



function TaskFour(){
    let date1 = new Date();
    document.write("<table bgcolor='aqua' border='5px'>");
    document.write("<tr><td>ГОД</td><td>"+date1.getFullYear()+"</td></tr>");
    document.write("<tr><td>МЕСЯЦ</td><td>"+(date1.getMonth()+1)+"</td></tr>");
    document.write("<tr><td>ДЕНЬ</td><td>"+(date1.getDate()+1)+"</td></tr>");
    document.write("<tr><td>ЧАСЫ</td><td>"+date1.getHours()+"</td></tr>");
    document.write("<tr><td>МИНУТЫ</td><td>"+date1.getMinutes()+"</td></tr>");
    document.write("<tr><td>СЕКУНДЫ</td><td>"+date1.getSeconds()+"</td></tr>");
    document.write("</table>");
}