let subject= "create video"


function createThink(subject) {
    subject= "study" //Está modificando apenas dentro da função o object.
    //Quando há parâmetro() dentro da função só é possivel alterar dentro do escopo da função.
    
    //Quando não houver parêmetro() é possivel alterar a variável que está fora da função.
    return subject
}

console.log(createThink(subject)) // Está pegando o valor dentro da função.

console.log(subject) //Está pegando o valor da variável subject.
// Se a variável não estiver com o valor declarado, aparecerá "undefined".
//Se não houvesse parâmetro definido na função, apareceria "study".