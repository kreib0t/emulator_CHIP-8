#include <inttypes.h>

struct Chip8
{
    uint8_t V[16];			// registers, VF is carry flag
	uint8_t memory[4096];	//RAM memory
	uint16_t rI;			// I register
	uint16_t pc;			// program counter
	uint16_t stack[16];		// stack
	uint8_t sp;				// stack counter
	uint8_t delayTimer;		// delay timer
	uint8_t soundTimer;		// sound timer
	uint8_t keypad[16];
	uint8_t video[64 * 32];	//video memory
	uint16_t opcode;
};
