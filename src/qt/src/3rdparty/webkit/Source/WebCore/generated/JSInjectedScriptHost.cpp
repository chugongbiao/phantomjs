/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(INSPECTOR)

#include "JSInjectedScriptHost.h"

#include "ExceptionCode.h"
#include "InjectedScriptHost.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSInjectedScriptHost);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInjectedScriptHostTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInjectedScriptHostConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInjectedScriptHostTable = { 2, 1, JSInjectedScriptHostTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInjectedScriptHostConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInjectedScriptHostConstructorTable = { 1, 0, JSInjectedScriptHostConstructorTableValues, 0 };
class JSInjectedScriptHostConstructor : public DOMConstructorObject {
public:
    JSInjectedScriptHostConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSInjectedScriptHostConstructor::s_info = { "InjectedScriptHostConstructor", &DOMConstructorObject::s_info, &JSInjectedScriptHostConstructorTable, 0 };

JSInjectedScriptHostConstructor::JSInjectedScriptHostConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSInjectedScriptHostPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSInjectedScriptHostConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSInjectedScriptHostConstructor, JSDOMWrapper>(exec, &JSInjectedScriptHostConstructorTable, this, propertyName, slot);
}

bool JSInjectedScriptHostConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSInjectedScriptHostConstructor, JSDOMWrapper>(exec, &JSInjectedScriptHostConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInjectedScriptHostPrototypeTableValues[13] =
{
    { "clearConsoleMessages", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionClearConsoleMessages), (intptr_t)0 THUNK_GENERATOR(0) },
    { "copyText", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionCopyText), (intptr_t)1 THUNK_GENERATOR(0) },
    { "inspect", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionInspect), (intptr_t)2 THUNK_GENERATOR(0) },
    { "inspectedNode", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionInspectedNode), (intptr_t)1 THUNK_GENERATOR(0) },
    { "internalConstructorName", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionInternalConstructorName), (intptr_t)1 THUNK_GENERATOR(0) },
    { "isHTMLAllCollection", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionIsHTMLAllCollection), (intptr_t)1 THUNK_GENERATOR(0) },
    { "type", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionType), (intptr_t)1 THUNK_GENERATOR(0) },
    { "databaseId", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionDatabaseId), (intptr_t)1 THUNK_GENERATOR(0) },
    { "storageId", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionStorageId), (intptr_t)1 THUNK_GENERATOR(0) },
    { "didCreateWorker", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionDidCreateWorker), (intptr_t)3 THUNK_GENERATOR(0) },
    { "didDestroyWorker", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionDidDestroyWorker), (intptr_t)1 THUNK_GENERATOR(0) },
    { "nextWorkerId", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsInjectedScriptHostPrototypeFunctionNextWorkerId), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInjectedScriptHostPrototypeTable = { 34, 31, JSInjectedScriptHostPrototypeTableValues, 0 };
const ClassInfo JSInjectedScriptHostPrototype::s_info = { "InjectedScriptHostPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSInjectedScriptHostPrototypeTable, 0 };

JSObject* JSInjectedScriptHostPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSInjectedScriptHost>(exec, globalObject);
}

bool JSInjectedScriptHostPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSInjectedScriptHostPrototypeTable, this, propertyName, slot);
}

bool JSInjectedScriptHostPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSInjectedScriptHostPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSInjectedScriptHost::s_info = { "InjectedScriptHost", &JSDOMWrapper::s_info, &JSInjectedScriptHostTable, 0 };

JSInjectedScriptHost::JSInjectedScriptHost(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<InjectedScriptHost> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSInjectedScriptHost::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSInjectedScriptHostPrototype(exec->globalData(), globalObject, JSInjectedScriptHostPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSInjectedScriptHost::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSInjectedScriptHost, Base>(exec, &JSInjectedScriptHostTable, this, propertyName, slot);
}

bool JSInjectedScriptHost::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSInjectedScriptHost, Base>(exec, &JSInjectedScriptHostTable, this, propertyName, descriptor);
}

JSValue jsInjectedScriptHostConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSInjectedScriptHost* domObject = static_cast<JSInjectedScriptHost*>(asObject(slotBase));
    return JSInjectedScriptHost::getConstructor(exec, domObject->globalObject());
}

JSValue JSInjectedScriptHost::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSInjectedScriptHostConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionClearConsoleMessages(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    InjectedScriptHost* imp = static_cast<InjectedScriptHost*>(castedThis->impl());

    imp->clearConsoleMessages();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionCopyText(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    InjectedScriptHost* imp = static_cast<InjectedScriptHost*>(castedThis->impl());
    const String& text(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->copyText(text);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionInspect(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    return JSValue::encode(castedThis->inspect(exec));
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionInspectedNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    return JSValue::encode(castedThis->inspectedNode(exec));
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionInternalConstructorName(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    return JSValue::encode(castedThis->internalConstructorName(exec));
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionIsHTMLAllCollection(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    return JSValue::encode(castedThis->isHTMLAllCollection(exec));
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionType(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    return JSValue::encode(castedThis->type(exec));
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionDatabaseId(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    return JSValue::encode(castedThis->databaseId(exec));
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionStorageId(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    return JSValue::encode(castedThis->storageId(exec));
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionDidCreateWorker(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    InjectedScriptHost* imp = static_cast<InjectedScriptHost*>(castedThis->impl());
    int id(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& url(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool isFakeWorker(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->didCreateWorker(id, url, isFakeWorker);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionDidDestroyWorker(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    InjectedScriptHost* imp = static_cast<InjectedScriptHost*>(castedThis->impl());
    int id(exec->argument(0).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->didDestroyWorker(id);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsInjectedScriptHostPrototypeFunctionNextWorkerId(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInjectedScriptHost::s_info))
        return throwVMTypeError(exec);
    JSInjectedScriptHost* castedThis = static_cast<JSInjectedScriptHost*>(asObject(thisValue));
    InjectedScriptHost* imp = static_cast<InjectedScriptHost*>(castedThis->impl());


    JSC::JSValue result = jsNumber(imp->nextWorkerId());
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, InjectedScriptHost* impl)
{
    return wrap<JSInjectedScriptHost>(exec, globalObject, impl);
}

InjectedScriptHost* toInjectedScriptHost(JSC::JSValue value)
{
    return value.inherits(&JSInjectedScriptHost::s_info) ? static_cast<JSInjectedScriptHost*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INSPECTOR)