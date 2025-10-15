let n = 4; // height of pyramid

for (let i = 0; i < n; i++) {
    let row = "";

    // spaces
    for (let j = 0; j < n - i - 1; j++) {
        row += " ";
    }

    // stars
    for (let k = 0; k <=i; k++) {
        row += "* ";
    }

    // print the row
    console.log(row);
}

for (let i = n - 2; i >= 0; i--) {
    let row = "";

    // spaces
    for (let j = 0; j < n - i - 1; j++) {
        row += " ";
    }

    // stars
    for (let k = 0; k <= i; k++) {
        row += "* ";
    }

    console.log(row);
}