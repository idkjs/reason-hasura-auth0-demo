// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE

import * as Curry from "bs-platform/lib/es6/curry.js";
import * as React from "react";

var logo = require("../imgs/logo.svg");

function Header(Props) {
  var openModal = Props.openModal;
  var isModalOpened = Props.isModalOpened;
  return React.createElement("header", {
              className: "flex mb-4 sticky top-0"
            }, React.createElement("nav", {
                  className: "w-full bg-gray-100  p-5"
                }, React.createElement("div", {
                      className: "justify-between flex max-w-6xl md:mx-10 lg:mx-10 xl:mx-10"
                    }, React.createElement("img", {
                          className: "w-10 h-10  mr-4",
                          src: logo
                        }), React.createElement("h1", {
                          className: "text-center md:text-xl md:text-l sm:text-s"
                        }, "ReasonML Blog CMS Built with GraphQL using Hasura and Netlify functions"), React.createElement("button", {
                          className: "shadow bg-purple-500 focus:shadow-outline focus:outline-none text-white font-bold py-2 px-4 rounded s sm:text-sm md:text-lg text-xs" + (
                            isModalOpened ? " animated pulse opacity-50 " : " hover:bg-purple-400"
                          ),
                          disabled: isModalOpened,
                          onClick: (function (e) {
                              e.stopPropagation();
                              return Curry._1(openModal, /* () */0);
                            })
                        }, "Add blog post"))));
}

var make = Header;

export {
  logo ,
  make ,
  
}
/* logo Not a pure module */
