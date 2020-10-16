cmd_fs/dlm/dlm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/dlm/dlm.ko fs/dlm/dlm.o fs/dlm/dlm.mod.o;  true
