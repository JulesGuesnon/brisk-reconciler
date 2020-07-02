type t = unit => unit;

let noop = () => ();

let chain = (f, f') =>
  if (f' === noop) {
    f;
  } else if (f === noop) {
    f';
  } else {
    print_endline("BOTH CASE");
    f();
    f'();

    () => {
      f();
      f'();
    };
  };