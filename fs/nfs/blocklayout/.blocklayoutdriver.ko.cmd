cmd_fs/nfs/blocklayout/blocklayoutdriver.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/nfs/blocklayout/blocklayoutdriver.ko fs/nfs/blocklayout/blocklayoutdriver.o fs/nfs/blocklayout/blocklayoutdriver.mod.o;  true