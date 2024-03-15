

document.getElementById("btn").addEventListener("click", () => {

    const i1 = document.getElementById("base")
    const i2 = document.getElementById("height")

    function calculateTriangleArea(base, height) {
        return (base * height) / 2
    }

    const TriangleArea = calculateTriangleArea(Number(i1.value), Number(i2.value), 1, 2)
    document.getElementById("TXT").innerHTML = TriangleArea
})