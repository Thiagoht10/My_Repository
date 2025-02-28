//Function expression
//Function anonymous

const sum = function(number1, number2) { //Parâmetros() - parameters
    let total= (number1 + number2) // Função - function
    return total //retorna o dentro da função
}

sum (2,10) // arguments (argumentos)
sum (10,5)
sum (20,1) //Pode ser reutilizado diversas vezes.

//Retornando valores dentro da função

let number11 = 34
let number22 = 25

console.log(`o primeiro número é ${number11}`)
console.log(`o segundo número é ${number22}`)
console.log(`a soma é ${sum(number11,number22)}`)