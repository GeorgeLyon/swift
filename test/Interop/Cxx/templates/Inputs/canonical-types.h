#ifndef TEST_INTEROP_CXX_TEMPLATES_INPUTS_CANONICAL_TYPES_H
#define TEST_INTEROP_CXX_TEMPLATES_INPUTS_CANONICAL_TYPES_H

template<class T>
struct MagicWrapper {
  T t;
  int getValuePlusArg(int arg) const { return t.getValue() + arg; }
  static int getStaticValuePlusArg(int arg) { return 42 + arg; }
};

struct IntWrapper {
  int value;
  int getValue() const { return value; }
};

typedef MagicWrapper<IntWrapper> WrappedMagicNumberA;
typedef MagicWrapper<IntWrapper> WrappedMagicNumberB;

#endif // TEST_INTEROP_CXX_TEMPLATES_INPUTS_CANONICAL_TYPES_H
