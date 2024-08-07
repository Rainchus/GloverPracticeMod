#include "types.h"

const u8 font[256][8] = {
    // Space ' '
    [32] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    // Exclamation mark '!'
    [33] = { 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00 },
    // Double quote '"'
    [34] = { 0x36, 0x36, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00 },
    // Hash '#'
    [35] = { 0x24, 0x24, 0x7E, 0x24, 0x7E, 0x24, 0x24, 0x00 },
    // Dollar sign '$'
    [36] = { 0x18, 0x3E, 0x58, 0x3C, 0x1A, 0x7C, 0x18, 0x00 },
    // Percent '%'
    [37] = { 0x62, 0x64, 0x08, 0x10, 0x26, 0x46, 0x00, 0x00 },
    // Ampersand '&'
    [38] = { 0x30, 0x48, 0x30, 0x70, 0x4A, 0x44, 0x3A, 0x00 },
    // Single quote '''
    [39] = { 0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00 },
    // Open parenthesis '('
    [40] = { 0x0C, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0C, 0x00 },
    // Close parenthesis ')'
    [41] = { 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x18, 0x30, 0x00 },
    // Asterisk '*'
    [42] = { 0x00, 0x36, 0x1C, 0x7F, 0x1C, 0x36, 0x00, 0x00 },
    // Plus '+'
    [43] = { 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00 },
    // Comma ','
    [44] = { 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00 },
    // Hyphen '-'
    [45] = { 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00 },
    // Period '.'
    [46] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00 },
    // Slash '/'
    [47] = { 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00 },
    // Digits '0'-'9'
    ['0'] = { 0x3C, 0x66, 0x6E, 0x76, 0x66, 0x66, 0x3C, 0x00 },
    ['1'] = { 0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00 },
    ['2'] = { 0x3C, 0x66, 0x06, 0x1C, 0x30, 0x60, 0x7E, 0x00 },
    ['3'] = { 0x3C, 0x66, 0x06, 0x1C, 0x06, 0x66, 0x3C, 0x00 },
    ['4'] = { 0x0C, 0x1C, 0x3C, 0x6C, 0x7E, 0x0C, 0x0C, 0x00 },
    ['5'] = { 0x7E, 0x60, 0x7C, 0x06, 0x06, 0x66, 0x3C, 0x00 },
    ['6'] = { 0x1C, 0x30, 0x60, 0x7C, 0x66, 0x66, 0x3C, 0x00 },
    ['7'] = { 0x7E, 0x66, 0x06, 0x0C, 0x18, 0x18, 0x18, 0x00 },
    ['8'] = { 0x3C, 0x66, 0x66, 0x3C, 0x66, 0x66, 0x3C, 0x00 },
    ['9'] = { 0x3C, 0x66, 0x66, 0x3E, 0x06, 0x0C, 0x38, 0x00 },
    // Colon ':'
    [58] = { 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00 },
    // Semicolon ';'
    [59] = { 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30 },
    // Less than '<'
    [60] = { 0x00, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x00, 0x00 },
    // Equals '='
    [61] = { 0x00, 0x00, 0x7E, 0x00, 0x00, 0x7E, 0x00, 0x00 },
    // Greater than '>'
    [62] = { 0x00, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x00, 0x00 },
    // Question mark '?'
    [63] = { 0x3C, 0x66, 0x06, 0x1C, 0x18, 0x00, 0x18, 0x00 },
    // At '@'
    [64] = { 0x3C, 0x66, 0x6E, 0x6A, 0x6E, 0x60, 0x3C, 0x00 },
    // Uppercase letters 'A'-'Z'
    ['A'] = { 0x18, 0x24, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x00 },
    ['B'] = { 0x7C, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x7C, 0x00 },
    ['C'] = { 0x3C, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3C, 0x00 },
    ['D'] = { 0x78, 0x6C, 0x66, 0x66, 0x66, 0x6C, 0x78, 0x00 },
    ['E'] = { 0x7E, 0x60, 0x60, 0x7C, 0x60, 0x60, 0x7E, 0x00 },
    ['F'] = { 0x7E, 0x60, 0x60, 0x7C, 0x60, 0x60, 0x60, 0x00 },
    ['G'] = { 0x3C, 0x66, 0x60, 0x6E, 0x66, 0x66, 0x3E, 0x00 },
    ['H'] = { 0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00 },
    ['I'] = { 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00 },
    ['J'] = { 0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x6C, 0x38, 0x00 },
    ['K'] = { 0x66, 0x6C, 0x78, 0x70, 0x78, 0x6C, 0x66, 0x00 },
    ['L'] = { 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7E, 0x00 },
    ['M'] = { 0x66, 0x7E, 0x7E, 0x6E, 0x66, 0x66, 0x66, 0x00 },
    ['N'] = { 0x66, 0x76, 0x7E, 0x7E, 0x6E, 0x66, 0x66, 0x00 },
    ['O'] = { 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00 },
    ['P'] = { 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x60, 0x00 },
    ['Q'] = { 0x3C, 0x66, 0x66, 0x66, 0x6E, 0x6C, 0x3A, 0x00 },
    ['R'] = { 0x7C, 0x66, 0x66, 0x7C, 0x78, 0x6C, 0x66, 0x00 },
    ['S'] = { 0x3C, 0x66, 0x60, 0x3C, 0x06, 0x66, 0x3C, 0x00 },
    ['T'] = { 0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00 },
    ['U'] = { 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00 },
    ['V'] = { 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00 },
    ['W'] = { 0x66, 0x66, 0x66, 0x6E, 0x7E, 0x7E, 0x66, 0x00 },
    ['X'] = { 0x66, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x66, 0x00 },
    ['Y'] = { 0x66, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x00 },
    ['Z'] = { 0x7E, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x7E, 0x00 },
    // Lowercase letters 'a'-'z'
    ['a'] = { 0x00, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E, 0x00 },
    ['b'] = { 0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x00 },
    ['c'] = { 0x00, 0x00, 0x3C, 0x66, 0x60, 0x66, 0x3C, 0x00 },
    ['d'] = { 0x06, 0x06, 0x3E, 0x66, 0x66, 0x66, 0x3E, 0x00 },
    ['e'] = { 0x00, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00 },
    ['f'] = { 0x1C, 0x30, 0x7C, 0x30, 0x30, 0x30, 0x30, 0x00 },
    ['g'] = { 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x3C, 0x00 },
    ['h'] = { 0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x00 },
    ['i'] = { 0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x3C, 0x00 },
    ['j'] = { 0x0C, 0x00, 0x0C, 0x0C, 0x0C, 0x6C, 0x38, 0x00 },
    ['k'] = { 0x60, 0x60, 0x66, 0x6C, 0x78, 0x6C, 0x66, 0x00 },
    ['l'] = { 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00 },
    ['m'] = { 0x00, 0x00, 0x7E, 0x7E, 0x6E, 0x6E, 0x66, 0x00 },
    ['n'] = { 0x00, 0x00, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x00 },
    ['o'] = { 0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00 },
    ['p'] = { 0x00, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x60, 0x60 },
    ['q'] = { 0x00, 0x3E, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x06 },
    ['r'] = { 0x00, 0x00, 0x7C, 0x66, 0x60, 0x60, 0x60, 0x00 },
    ['s'] = { 0x00, 0x00, 0x3E, 0x60, 0x3C, 0x06, 0x7C, 0x00 },
    ['t'] = { 0x30, 0x30, 0x7C, 0x30, 0x30, 0x30, 0x1C, 0x00 },
    ['u'] = { 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x00 },
    ['v'] = { 0x00, 0x00, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00 },
    ['w'] = { 0x00, 0x00, 0x66, 0x6E, 0x7E, 0x7E, 0x66, 0x00 },
    ['x'] = { 0x00, 0x00, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x00 },
    ['y'] = { 0x00, 0x00, 0x66, 0x66, 0x3E, 0x06, 0x3C, 0x00 },
    ['z'] = { 0x00, 0x00, 0x7E, 0x0C, 0x18, 0x30, 0x7E, 0x00 },
    // Special characters '_'
    [95] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00 },
    // Plus '+'
    [43] = { 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00 },
    // Hyphen '-'
    [45] = { 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00 },
    // Equal '='
    [61] = { 0x00, 0x00, 0x7E, 0x00, 0x00, 0x7E, 0x00, 0x00 },
    // Backslash '\'
    [92] = { 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00 },
    // Open square bracket '['
    [91] = { 0x1C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1C, 0x00 },
    // Close square bracket ']'
    [93] = { 0x1C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1C, 0x00 },
    // Caret '^'
    [94] = { 0x18, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00 },
    // Grave accent '`'
    [96] = { 0x18, 0x0C, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00 },
    // Curly brackets '{'
    [123] = { 0x0E, 0x08, 0x08, 0x30, 0x08, 0x08, 0x0E, 0x00 },
    [125] = { 0x70, 0x10, 0x10, 0x0C, 0x10, 0x10, 0x70, 0x00 },
    // Vertical bar '|'
    [124] = { 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00 },
    // Tilde '~'
    [126] = { 0x32, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};