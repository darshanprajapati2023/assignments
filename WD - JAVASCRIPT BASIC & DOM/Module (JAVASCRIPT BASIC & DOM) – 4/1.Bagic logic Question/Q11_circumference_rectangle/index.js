

document.getElementById("btn").addEventListener("click", () => {

    const i1 = document.getElementById("length")
    const i2 = document.getElementById("width")

    function calculateRectangleCircumferance(length, width) {
        return 2 * (length + width)
    }

    const RectangleCircumference = calculateRectangleCircumferance(Number(i1.value), Number(i2.value), 2)
    document.getElementById("TXT").innerHTML = RectangleCircumference
})