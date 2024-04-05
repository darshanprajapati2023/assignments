document.getElementById("BTN").addEventListener("click", () => {

    const i = document.getElementById("num")

    function printfibonacciSeries(num) {
        let fibonacci = [0, 1];

        for (let i = 2; i <= num; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
            if (fibonacci[i] > num) break;
        }

        return fibonacci.slice(0, fibonacci.length - 1);
    }

    const fibonacciSeries = printfibonacciSeries(Number(i.value))
    document.getElementById("TXT").innerHTML = fibonacciSeries
})