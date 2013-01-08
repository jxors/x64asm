#ifndef X64_SRC_IO_HEX_WRITER_H
#define X64_SRC_IO_HEX_WRITER_H

#include <iostream>

#include "src/code/code.h"

namespace x64 {

class HexWriter {
	public:
		static void write(std::ostream& os, const Code& c);
};

} // namespace x64

#endif
