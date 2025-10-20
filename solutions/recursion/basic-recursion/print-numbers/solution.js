

function numbers(i, n) {

    if (i >= n) {
        console.log(i)
        return;
    }
    numbers(i + 1, n);
    console.log(i)
}

numbers(1, 5)

// The Architect 🙎‍♂️