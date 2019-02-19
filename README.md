# asciider

Have a break, have an ascii art

**Note**: I'm fully aware that this has nothing to do with ascii art or any brand associated with it, or KitKat

## Building

Just run the C file through any compiler (e.g. `gcc -o asciider asciider.c`).

## Usage

asciider reads from stdin and outputs to stdout. This means you probably want to use it like this `asciider < input`.
Furthermore it assumes all files only contain valid characters (listed below).

## File format

| Character    | Meaning     |
|--------------|-------------|
| \n (newline) | newline     |
| k            | key (black) |
| r            | red         |
| g            | green       |
| y            | yellow      |
| b            | blue        |
| m            | magenta     |
| c            | cyan        |
| w            | white       |

All colors can be used UPPERCASED to get their bright counterpart.

**Note**: The actual colors depend on the colorscheme used. If you go all green on black k will be black and the rest will be green.
