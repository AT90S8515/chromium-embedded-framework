// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/browser_host_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/process_message_cpptoc.h"
#include "libcef_dll/transfer_util.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

struct _cef_browser_host_t* CEF_CALLBACK browser_get_host(
    struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBrowserHost> _retval = CefBrowserCppToC::Get(self)->GetHost();

  // Return type: refptr_same
  return CefBrowserHostCppToC::Wrap(_retval);
}

int CEF_CALLBACK browser_can_go_back(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->CanGoBack();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_go_back(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->GoBack();
}

int CEF_CALLBACK browser_can_go_forward(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->CanGoForward();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_go_forward(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->GoForward();
}

int CEF_CALLBACK browser_is_loading(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->IsLoading();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_reload(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->Reload();
}

void CEF_CALLBACK browser_reload_ignore_cache(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->ReloadIgnoreCache();
}

void CEF_CALLBACK browser_stop_load(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserCppToC::Get(self)->StopLoad();
}

int CEF_CALLBACK browser_get_identifier(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefBrowserCppToC::Get(self)->GetIdentifier();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK browser_is_same(struct _cef_browser_t* self,
    struct _cef_browser_t* that) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->IsSame(
      CefBrowserCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_is_popup(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->IsPopup();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_has_document(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->HasDocument();

  // Return type: bool
  return _retval;
}

struct _cef_frame_t* CEF_CALLBACK browser_get_main_frame(
    struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefBrowserCppToC::Get(self)->GetMainFrame();

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

struct _cef_frame_t* CEF_CALLBACK browser_get_focused_frame(
    struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefBrowserCppToC::Get(self)->GetFocusedFrame();

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

struct _cef_frame_t* CEF_CALLBACK browser_get_frame_byident(
    struct _cef_browser_t* self, int64 identifier) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefBrowserCppToC::Get(self)->GetFrame(
      identifier);

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

struct _cef_frame_t* CEF_CALLBACK browser_get_frame(struct _cef_browser_t* self,
    const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefBrowserCppToC::Get(self)->GetFrame(
      CefString(name));

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

size_t CEF_CALLBACK browser_get_frame_count(struct _cef_browser_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  size_t _retval = CefBrowserCppToC::Get(self)->GetFrameCount();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_get_frame_identifiers(struct _cef_browser_t* self,
    size_t* identifiersCount, int64* identifiers) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: identifiers; type: simple_vec_byref
  DCHECK(identifiersCount && (*identifiersCount == 0 || identifiers));
  if (!identifiersCount || (*identifiersCount > 0 && !identifiers))
    return;

  // Translate param: identifiers; type: simple_vec_byref
  std::vector<int64 > identifiersList;
  if (identifiersCount && *identifiersCount > 0 && identifiers) {
    for (size_t i = 0; i < *identifiersCount; ++i) {
      identifiersList.push_back(identifiers[i]);
    }
  }

  // Execute
  CefBrowserCppToC::Get(self)->GetFrameIdentifiers(
      identifiersList);

  // Restore param: identifiers; type: simple_vec_byref
  if (identifiersCount && identifiers) {
    *identifiersCount = std::min(identifiersList.size(), *identifiersCount);
    if (*identifiersCount > 0) {
      for (size_t i = 0; i < *identifiersCount; ++i) {
        identifiers[i] = identifiersList[i];
      }
    }
  }
}

void CEF_CALLBACK browser_get_frame_names(struct _cef_browser_t* self,
    cef_string_list_t names) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: names; type: string_vec_byref
  DCHECK(names);
  if (!names)
    return;

  // Translate param: names; type: string_vec_byref
  std::vector<CefString> namesList;
  transfer_string_list_contents(names, namesList);

  // Execute
  CefBrowserCppToC::Get(self)->GetFrameNames(
      namesList);

  // Restore param: names; type: string_vec_byref
  cef_string_list_clear(names);
  transfer_string_list_contents(namesList, names);
}

int CEF_CALLBACK browser_send_process_message(struct _cef_browser_t* self,
    enum cef_process_id_t target_process,
    struct _cef_process_message_t* message) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: message; type: refptr_same
  DCHECK(message);
  if (!message)
    return 0;

  // Execute
  bool _retval = CefBrowserCppToC::Get(self)->SendProcessMessage(
      target_process,
      CefProcessMessageCppToC::Unwrap(message));

  // Return type: bool
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefBrowserCppToC::CefBrowserCppToC(CefBrowser* cls)
    : CefCppToC<CefBrowserCppToC, CefBrowser, cef_browser_t>(cls) {
  struct_.struct_.get_host = browser_get_host;
  struct_.struct_.can_go_back = browser_can_go_back;
  struct_.struct_.go_back = browser_go_back;
  struct_.struct_.can_go_forward = browser_can_go_forward;
  struct_.struct_.go_forward = browser_go_forward;
  struct_.struct_.is_loading = browser_is_loading;
  struct_.struct_.reload = browser_reload;
  struct_.struct_.reload_ignore_cache = browser_reload_ignore_cache;
  struct_.struct_.stop_load = browser_stop_load;
  struct_.struct_.get_identifier = browser_get_identifier;
  struct_.struct_.is_same = browser_is_same;
  struct_.struct_.is_popup = browser_is_popup;
  struct_.struct_.has_document = browser_has_document;
  struct_.struct_.get_main_frame = browser_get_main_frame;
  struct_.struct_.get_focused_frame = browser_get_focused_frame;
  struct_.struct_.get_frame_byident = browser_get_frame_byident;
  struct_.struct_.get_frame = browser_get_frame;
  struct_.struct_.get_frame_count = browser_get_frame_count;
  struct_.struct_.get_frame_identifiers = browser_get_frame_identifiers;
  struct_.struct_.get_frame_names = browser_get_frame_names;
  struct_.struct_.send_process_message = browser_send_process_message;
}

#ifndef NDEBUG
template<> long CefCppToC<CefBrowserCppToC, CefBrowser,
    cef_browser_t>::DebugObjCt = 0;
#endif

