#include <nan.h>
#include "HIDCtrl.h"

namespace ctrl {

using namespace v8;

NAN_METHOD(PON1) {
  int result = PowerOn1();
  info.GetReturnValue().Set(Nan::New(result));
}

NAN_METHOD(POFF1) {
  int result = PowerOff1();
  info.GetReturnValue().Set(Nan::New(result));
}

NAN_MODULE_INIT(Init) {
  Nan::Set(target, Nan::New<String>("po1").ToLocalChecked(),
          Nan::GetFunction(Nan::New<FunctionTemplate>(PON1)).ToLocalChecked());
  Nan::Set(target, Nan::New<String>("pof1").ToLocalChecked(),
          Nan::GetFunction(Nan::New<FunctionTemplate>(POFF1)).ToLocalChecked());
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Init);

}
