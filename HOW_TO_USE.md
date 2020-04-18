### Instructions

| Instruction | Operation                               |
| ---         | ---                                     |
| O           | Move the cursor 1 to the right          |
| RE          | Increment the Accumulator               |
| &O          | Print the Accumulator (Ascii Character) |

If I wanted to print an I to the console, I would begin by typing `O`, followed by 73 `RE`s and finally to actually print the character I would type `&O`
This process is the same for every character, except the amount of `RE`s is the ASCII decimal of the character to display.
If you want to print a space, simply just do `O` after printing you previous character... 

### Conventions
Each line should start with an `O`, this makes sure that you've moved the cursor from the previous character (This is only enforced for the first character in the file, because the cursor starts at -1 which would cause a write violation)
Each line should contain only 1 `&O`, this makes sure that you've printed the character for that line
Only one character should be printed per line of code. This isn't enforced, but it helps keep things neat.
If you print a space, please make an empty line after that, this lets people know where words break at.
