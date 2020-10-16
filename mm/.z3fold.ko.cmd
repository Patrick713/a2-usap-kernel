cmd_mm/z3fold.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o mm/z3fold.ko mm/z3fold.o mm/z3fold.mod.o;  true
