
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GtkButtonPeer__
#define __gnu_java_awt_peer_gtk_GtkButtonPeer__

#pragma interface

#include <gnu/java/awt/peer/gtk/GtkComponentPeer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GtkButtonPeer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Button;
    }
  }
}

class gnu::java::awt::peer::gtk::GtkButtonPeer : public ::gnu::java::awt::peer::gtk::GtkComponentPeer
{

public: // actually package-private
  virtual void create(::java::lang::String *);
public:
  virtual void connectSignals();
public: // actually protected
  virtual void gtkWidgetModifyFont(::java::lang::String *, jint, jint);
public: // actually package-private
  virtual void gtkSetLabel(::java::lang::String *);
  virtual void gtkWidgetSetForeground(jint, jint, jint);
  virtual void gtkWidgetSetBackground(jint, jint, jint);
  virtual void gtkActivate();
  virtual void gtkWidgetRequestFocus();
  virtual void setNativeBounds(jint, jint, jint, jint);
  virtual void gtkWidgetGetPreferredDimensions(JArray< jint > *);
public:
  GtkButtonPeer(::java::awt::Button *);
public: // actually package-private
  virtual void create();
public:
  virtual void setLabel(::java::lang::String *);
public: // actually package-private
  virtual void postActionEvent(jint);
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GtkButtonPeer__
