let telBook=new Map();
let telMas=["+375291414741","+375296115063","+375296177415","+375291033901","+375296076870"];
for(let elem=1;elem<=telMas.length; elem++){
    telBook.set(elem+"",telMas[elem-1]);
}

function TelephoneBook() {
    alert(telBook.get(prompt("Введите ключ (1,2,3,4,5)","1")))
}


let mySet=new Set();
mySet.add(1);mySet.add(2),mySet.add(3);

function MySet() {
    alert(`           Размер множества mySet = ${mySet.size}\n\
           В множестве mySet есть 1? - ${mySet.has(1)}\n\
           В множестве mySet есть 3? - ${mySet.has(3)}\n\
           В множестве mySet есть 5? - ${mySet.has(5)}\n\
           В множестве mySet есть 7? - ${mySet.has(7)}\n\
           `);

}

let proto={
    param1:"1",
    param2:"2",
    param3:"3",
    displayMet:function (){
        alert(`Параметр 1 = ${this.param1}\n\
        Параметр 2 = ${this.param2}\n\
        Параметр 3 = ${this.param3}\n\
        `)
    }
}
function  objCreateMethod(){
    let proto2=Object.create(proto);
    proto2.param1="3";proto2.param3="1";
    alert(proto.displayMet());
}

function defParam(name="Аноним"){
    return `Привет, ${name}`
}
function  callDefParam(){
    alert(`
        С передачей параметра  : ${defParam(prompt("Введите ваше имя:"))} \n
        Без передачи параметра : ${defParam()}
    `);
}
function myClosure(param){
    function ChangeParam(){
        let save=param;
        let numOfClicks=1
        param.value = `Количество нажатий = ${numOfClicks++}`
    }
    return ChangeParam
}
function  Closures(){
    let newWindow=window.open("Task5_closures.html","TaskFive","width=200,height=150").document;
}