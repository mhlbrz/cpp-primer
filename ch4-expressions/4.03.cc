/*
Order of evaluation for most of the binary operators is left
undefined to give the compiler opportunities for optimization. This strategy
presents a trade-off between efficient code generation and potential pitfalls in
the use of the language by the programmer. Do you consider that an
acceptable trade-off? Why or why not?

binary operations are bind closely with processor architecture,
so same code might have different implementions base on arch

pros:
code can be abstracted from architecrute, application can be portable

cons:
some one needs to make mapping to the architecture anyway,
so this job left for the compiler developers

*/
