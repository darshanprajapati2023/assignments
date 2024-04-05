
document.getElementById("BTN").addEventListener("click", () => {

    const i = document.getElementById("num")

    function calculatefactorial(num) {
        if (num === 0 || num === 1) {
            return 1;
        } else {
            return num * calculatefactorial(num - 1);
        }
    }

    const factorial = calculatefactorial(Number(i.value))
    document.getElementById("TXT").innerHTML = factorial
})