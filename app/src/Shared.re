let show = ReasonReact.stringToElement;
let bold = (text) => {
  <span className="bold">(show(text))</span>
};
let negTopMargin = ReactDOMRe.Style.make(~marginTop="-0.8em", ());

let link = (text, href) => {
  <a href=(href)>(show(text))</a>
};

let (+++) = (a, b) => {
  ReasonReact.arrayToElement([|a, b|])
};