//Separando string

let phrase = "Eu quero viver o extraordinário!"
let myArray = phrase.split(" ",3)
console.log(myArray)

/*Divida uma string em substrings usando o separador especificado e retorne-as como uma matriz.

Separador - Uma string que identifica o caractere ou caracteres a serem usados ​​na separação da string. Se omitido, um array de elemento único contendo a string inteira é retornado.

Limite - Um valor usado para limitar o número de elementos retornados na matriz.
*/


let phraseWithUnderscore = myArray.join("_")
console.log(phraseWithUnderscore)

/*join: Adiciona todos os elementos de um array em uma string, separados pela string separadora especificada.

Separador - Uma string usada para separar um elemento do array do próximo na string resultante. Se omitido, os elementos da matriz são separados por uma vírgula.*/