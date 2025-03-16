//https://learn.javascript.ru/form-elements#input-i-textarea


// выше. Изучить правила создания элементов формы.
// Задание 2. Создать форму, содержащую элементы (текстовая область, 2
// текстовых поля, список, 4 радиокнопки, 5 флажков, командные кнопки). Вид
// формы представлен ниже.

//Задание 3. Для кнопки «Напечатать» написать функцию, выводящую на
// страницу примерно такой текст (подчеркнутые фразы взять из элементов
// формы, используя обращение к ним по имени, а также по номеру элемента):
// Факультет информационных технологий
// Студент Фамилия специальность ИСиТ курс 1 должен сдавать
// следующие предметы:
//  ОИТ
//  История
//  Математика

// Задание 4. Создать еще одну форму с одним элементом – списком.
// Заполнить список предметами, выбранными на первой форме.
// Можно придумать свою форму с разными элементами. Это
// приветствуется.



function Print(){
    let myForm= document.forms["univUser"];
    let formOutputWindow=window.open("","MyWin","width=600px,height=500px");


    formOutputWindow.document.write("<div style='width: 100%;border: 2px solid blueviolet;\n" +
        "    background: crimson;padding: 5px;margin: auto;'>");


    formOutputWindow.document.write(`<p style='text-align: center;text-decoration: underline;'> ${myForm.aboutYou.value} </p>`)
    formOutputWindow.document.write(`<p style='text-align: left;text-indent: 15px;'>
                                        Студент ${myForm.lastName.value} 
                                        специальность ${myForm.speciality.value} 
                                        курс ${myForm.course.value} 
                                        должен сдавать следующие предметы: <br></p>`)

    formOutputWindow.document.write("<ul type='radial'>");

    let subj=document.getElementsByClassName("chSub");
    for(let i=0;i<subj.length;i++){
        if(subj[i].checked){
            formOutputWindow.document.write(`<li>${subj[i].value}</li>`);
        }
    }

    formOutputWindow.document.write("</ul>")
    formOutputWindow.document.write("</div>")
}


