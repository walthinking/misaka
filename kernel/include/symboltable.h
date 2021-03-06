#ifndef _SYMBOLTABLE_H
#define _SYMBOLTABLE_H

extern char kernel_symbols_start[];
extern char kernel_symbols_end[];

typedef struct {
	uintptr_t addr;
	char name[];
} kernel_symbol_t;

extern void (* symbol_find(const char * name))(void);

#endif /* _SYMBOLTABLE_H */
