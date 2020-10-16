cmd_net/sched/em_text.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/em_text.ko net/sched/em_text.o net/sched/em_text.mod.o;  true
