cmd_net/sched/sch_dsmark.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_dsmark.ko net/sched/sch_dsmark.o net/sched/sch_dsmark.mod.o;  true
