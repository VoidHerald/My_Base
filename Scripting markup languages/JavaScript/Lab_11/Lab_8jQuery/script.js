//Задание 1. Создать программу на JS, изменяющую цвет слова в тексте
// при наведении курсора мыши (событие Onmouseover, свойство style.color).
// Задание 2. Создать программу на JS, изменяющую размер шрифта слова
// щелчком мыши (событие Onclick, свойство style.fontSize).
// Задание 3. Создать программу на JS замены картинки на другую при
// щелчке мышью с помощью метода getElementById и свойства src.
// Задание 4. Создать программу на JS, заменяющую текст изображением,
// с использованием метода getElementById и свойства innerHTML.
// Задание 5. Создать эффекты увеличения размера рисунка (свойство
// width) при наведении на него курсора мыши и возврата к первоначальному
// размеру при уходе курсора с рисунка (событие onmouseout)
// Задание 6. Нарисовать цветную рамку произвольного стиля вокруг
// любого абзаца при двойном щелчке (событие dblclick) на абзац.







//<script>
// var pic_sm = new Array("mcat1.jpg", "mcat2.jpg", "mcat3.jpg")
// var pic_bg = new Array("cat1.jpg", "cat2.jpg", "cat3.jpg")
// var pic_flag = new Array(pic_sm.length) // массив флагов
// /* Формирование строки тегов изображений */
// var xstr = ""
// for (i=0; i<pic_sm.length; i++)
//  xstr += '<img id="img'+i+'" src="'+pic_sm[i]+'"
// onclick="imgchange()">'
//  document.write(xstr)
// function imgchange() {
// var xid=event.srcElement.id //id изображения, на котором был
// щелчок
// var n=parseInt(xid.substr(3)) // выделяем номер элемента
// if (pic_flag[n]) document.all[xid].src=pic_sm[n]
//  else document.all[xid].src=pic_bg[n]
// pic_flag[n] = !pic_flag[n]
// }
// </script>