
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_font_TextLayout$CaretPolicy__
#define __java_awt_font_TextLayout$CaretPolicy__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace font
      {
          class TextHitInfo;
          class TextLayout;
          class TextLayout$CaretPolicy;
      }
    }
  }
}

class java::awt::font::TextLayout$CaretPolicy : public ::java::lang::Object
{

public:
  TextLayout$CaretPolicy();
  virtual ::java::awt::font::TextHitInfo * getStrongCaret(::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *, ::java::awt::font::TextLayout *);
  static ::java::lang::Class class$;
};

#endif // __java_awt_font_TextLayout$CaretPolicy__
