/* slang freaking rules!!
** You're in the rules file...
*/

#ifndef SLANG_RULE_H
#define SLANG_RULE_H

_Bool alnum(char del) {
    return (del >= 'a' && del <= 'z' ||
            del >= 'A' && del <= 'Z' ||
            del >= '0' && del <= '9');
}

_Bool alpha(char del) {
    return (del >= 'a' && del <= 'z' ||
            del >= 'A' && del <= 'Z');
}

_Bool numeric(char del) {
    return (del >= '0' && del <= '9');
}

_Bool alphalower(char del) {
    return (del >= 'a' && del <= 'z');
}

_Bool alphaupper(char del) {
    return (del >= 'A' && del <= 'Z');
}

_Bool literal(char del, char lit) {
    return (del == lit);
}

/* TODO: Support UNICODE Strings */
_Bool unicode(unsigned long del);

#endif /* SLANG_RULE_H */