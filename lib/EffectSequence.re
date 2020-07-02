type t = unit => unit;

let noop = () => ();

let chain = (f, f') =>
  if (f' === noop) {
    print_endline("HERE#1");
    f;
  } else if (f === noop) {
    print_endline("HERE#2");
    f';
  } else {
    print_endline("HERE #3");
    () => {
      print_endline("HERE#4");
      f();
      f'();
    };
  };