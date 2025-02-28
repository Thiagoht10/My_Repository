//Manipulando arrays

let myArray = ['a','b','c','d']

//adicionar um item ao fim da array
myArray.push("e")

//adicionar no começo da array
myArray.unshift("x")

//remover do fim
myArray.pop()

//remover do começo
myArray.shift()

//pegar apenas alguns elementos do array
console.log(myArray.slice(1,3)) //(b,c)

//Remover um ou mais itens em qualquer posição do array
myArray.splice(2,1)

//Encontrar posição de um elemento no array
let index = myArray.indexOf("d") //indexOf está encontrando a posição e colocando dentro da variável let.
myArray.splice(index,1) //slice está sendo usado para remover e usando o valor que está dentro da variável.


console.log(index)

console.log(myArray)