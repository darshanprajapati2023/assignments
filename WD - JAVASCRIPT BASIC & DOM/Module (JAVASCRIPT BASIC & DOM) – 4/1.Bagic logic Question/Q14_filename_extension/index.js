
document.getElementById("btn").addEventListener("click", () => {

    const i1 = document.getElementById("filename")

    function getFileExtension(filename) {

        let parts = filename.split('.')

        return parts[parts.length - 1]
    }

    const FileExtionsion = getFileExtension(i1.value)
    document.getElementById("TXT").innerHTML = FileExtionsion
})

