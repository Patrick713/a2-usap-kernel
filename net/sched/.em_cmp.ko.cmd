cmd_net/sched/em_cmp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/em_cmp.ko net/sched/em_cmp.o net/sched/em_cmp.mod.o;  true
