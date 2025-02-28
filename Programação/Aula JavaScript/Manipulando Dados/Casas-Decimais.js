// Manipulando casas decimais

let number = 58.7573
console.log(number)
console.log(number.toFixed(2).replace(".",","))
console.log(typeof(number.toFixed(2).replace(".",",")))

//toFixed fixa a quantidade de casas decimais de um número, sendo assim, esse método está atrelado ao Number.

//replace substitui dados de uma String, sendo assim, está atrelado há uma String. Se for usado num Number, ela o transforma numa String.

//Na linha 6 foi demonstrado a transformação de um Number numa String através do replace. Foi usado o typeof para monstrar o tipo de dado no console.