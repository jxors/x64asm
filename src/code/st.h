#ifndef X64_SRC_CODE_ST_H
#define X64_SRC_CODE_ST_H

#include <iostream>

#include "src/code/op_type.h"
#include "src/code/operand.h"

namespace x64 {

/** The ith element from the top of the FPU register stack 
	  (i = 0 through 7). 
*/
class St : public AtomicOperand {
	friend class Constants;
	protected:
		inline St(uint64_t val) : AtomicOperand{val} { } 

	public:
		virtual OpType type() const;
		virtual bool check() const;

		virtual void write_att(std::ostream& os) const;
		virtual void write_intel(std::ostream& os) const;
};

/** The top element of the FPU register stack. */
class St0 : public St {
	friend class Constants;
	private:
		inline St0() : St{0} { }

	public:
		virtual OpType type() const;
		virtual bool check() const;
};

} // namespace x64

#endif
