let n = 5; // height of pyramid

for (let i = 0; i < n; i++) {
    let row = "";

    // spaces
    for (let j = 0; j <= i; j++) {
        row += " ";
    }

    // stars
    for (let k = 0; k < 2 * i + 1; k++) {
        if (k == 0 || k == 2 * i || (i == n - 1 && k % 2 == 0)) {
            row += "*";
        } else {
            row += " ";
        }
    }

    // print the row
    console.log(row);
}

//By The Architect 🙎‍♂️
