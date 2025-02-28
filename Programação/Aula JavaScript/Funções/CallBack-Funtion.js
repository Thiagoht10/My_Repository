// Callback function

function sayMayName () {
    console.log('Antes de executar a função callback')

        function name() {
            console.log('Estou em uma callback')
        }
        name() //Uma função dentro de outra função

    console.log('Depois de executar a callback')
}

sayMayName()

//OR

function sayMayName2 (name, age) {
    console.log('Antes de executar a função callback')
    
    name()
    age()
    console.log('Depois de executar a callback')
}

sayMayName2 ( //Colocando uma função como argumento.
    () => {
        console.log('Estou em uma callback')
    },
    
    () => {
        console.log('Estou em uma callback')
    }
) //Callback é colocar uma função dentro de um parâmetro de uma outra função.

//Quando colocamos uma função dentro de um argumento, estamos jogando essa função para dentro da função que foi chamada e depois chamando a segunda função dentro da primeira (callback - chamar novamente).

//É possível adicionar mais de uma função no argumento de uma chamada de função e fazer o callback depois. É necessario serpara por vírgula.