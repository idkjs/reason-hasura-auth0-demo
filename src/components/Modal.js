// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE

import * as React from "react";
import * as AddPostForm$HasuraReasonDemoApp from "./AddPostForm.js";

function Modal(Props) {
  var closeModal = Props.closeModal;
  return React.createElement("div", {
              className: "absolute border w-11/12 z-10 bg-gray-100 shadow-md p-5 modal-center animated zoomInUp",
              onClick: (function ($$event) {
                  $$event.stopPropagation();
                  return /* () */0;
                })
            }, React.createElement(AddPostForm$HasuraReasonDemoApp.make, {
                  closeModal: closeModal
                }));
}

var make = Modal;

export {
  make ,
  
}
/* react Not a pure module */
