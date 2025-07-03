###is_valid_base

This function checks if a base string is valid for use in ft_putnbr_base.

# ---------------------------------- #

##Quick Summary (For Skimmers)

# ---------------------------------- #

Base must have **at least 2 unique printable characters.**

• • • • • • •

Rejects:
    ᗢ Any base with length < 2
    ᗢ Characters like '+', '-'
    ᗢ Non-printable ASCII chars
    ᗢ Duplicate characters

• • • • • • •

Returns:
    ᗢ 1 if valid
    ᗢ 0 if invalid

# ---------------------------------- #

##Full Step-by-Step Explanation (for those who want context)

<sub>This is my personal explanation of how the is_valid_base function works internally. Helpful (hopefully) if you prefer detailed, logical breakdowns instead of short summaries..<sub>

# ---------------------------------- #

The function starts by checking the **length of the base string.**
If the length is less than 2, it returns 0 immediately. This is because a valid base system must have at least two characters — for example, binary ("01") is the smallest usable base.

• • • • • • •

If the length is valid, we proceed to check each character in the base string using a loop indexed by i.
*(You can name the variable anything)*

Inside the loop:
    ᗢ We check if the current character is:
        ᗢ '+'
        ᗢ '-'
        ᗢ A **non-printable** ASCII character (i.e. ASCII < 32 or ASCII > 126)
    ᗢ If any of these are found, the function returns 0 - because these characters are not allowed in base systems.

• • • • • • •

If the character passes those checks, we then check for duplicates in the base string.
    ᗢ This is done using a nested loop with a second index j, starting from i + 1.

Why j = i + 1?
    ᗢ Because we only want to compare the current character (base[i]) with the characters that come after it in the string.
    ᗢ Starting j from 0 would:
        ᗢ Compare the character to itself (which is useless)
        ᗢ Re-check previous comparisons (which is inefficient)

So by starting from j = i + 1, we make sure we're only scanning forward, which is what we want when checking for duplicates.

• • • • • • •

ᗢ If base[i] == base[j] → we’ve found a duplicate character, and the function returns 0.

• • • • • • •

If the entire string passes all checks:
    ᗢ No invalid characters
    ᗢ No duplicates

Then the function reaches the end and returns 1, meaning the base is valid.
