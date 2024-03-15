

document.getElementById("btn").addEventListener("click", () => {

    const i1 = document.getElementById("fahrenheit")

    function convertfahrenheitToCelsius(fahrenheit) {
        return (5 / 9) * (fahrenheit - 32)
    }

    const fahrenheitToCelsius = convertfahrenheitToCelsius(Number(i1.value), 5, 9, 32)
    document.getElementById("TXT").innerHTML = fahrenheitToCelsius
})