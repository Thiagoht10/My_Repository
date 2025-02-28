//Declare uma variável de nome weight
//let weight

//Que tipo de dado é a variável acima?
//console.log(typeof weight) /*undefined*/

/*Declare uma variável e atribua valores para cada um dos dados:
    *name: String
    *age: Number (integer)
    *stars: Number (float)
    *isSubscribed: Boolean
*/
//let name= "Thiago"
//let age= 25
//let stars= 25.9
//let isSubscribed= false

//A variável studant abaixo é de que tipo?
//Atribua a ela as mesmas propriedade e valores do exercício anterior

/*Mostre no console a seguinte mansagem:
    <nome> de idade <age> pesa <weight> Kg.*/

//let studant= {};
//console.log(typeof studant) //Object

let studant = {
    name: "Thiago",
    age: 25,
    weight: 65,
}

/*console.log(`${studant.name} de ${studant.age} anos tem ${studant.weight}Kg.`) */

//Crie uma outra variável do tipo object e coloque na posição 1 do array
let Thiago = {
    nome: "Thiago",
    age: 24,
    weight: 66,
}

let studants = [
    studant
]
studants[1] = Thiago //Dessa forma adiciona-se na posição 1 do array
console.log(studants)