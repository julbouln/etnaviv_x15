#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7109deb1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xd3b97385, __VMLINUX_SYMBOL_STR(drm_gem_prime_export) },
	{ 0x52ef7fc6, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x5034561f, __VMLINUX_SYMBOL_STR(drm_prime_gem_destroy) },
	{ 0x30a927ef, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x618dda78, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0x68989d61, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xce2a7904, __VMLINUX_SYMBOL_STR(drm_gem_put_pages) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2f2712b3, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2dcc642e, __VMLINUX_SYMBOL_STR(__ww_mutex_lock_interruptible) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xfb974512, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x1890e155, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0xc885dd73, __VMLINUX_SYMBOL_STR(component_unbind_all) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfc0ea557, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xd2af138b, __VMLINUX_SYMBOL_STR(reservation_ww_class) },
	{ 0xed1eaf5a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd6714f72, __VMLINUX_SYMBOL_STR(reservation_object_wait_timeout_rcu) },
	{ 0x4d1e30db, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0x6422ba26, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x43303ac2, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x3c465949, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x61ae1531, __VMLINUX_SYMBOL_STR(iommu_map) },
	{ 0x59c0191, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x8b1e92b0, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xc619369, __VMLINUX_SYMBOL_STR(drm_mm_scan_add_block) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xed51e6, __VMLINUX_SYMBOL_STR(fence_wait_timeout) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x4657ebaa, __VMLINUX_SYMBOL_STR(fence_context_alloc) },
	{ 0xe363a95d, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3d2cf9d9, __VMLINUX_SYMBOL_STR(component_bind_all) },
	{ 0xfdb83c5c, __VMLINUX_SYMBOL_STR(fence_default_wait) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x1964520e, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xf7093fda, __VMLINUX_SYMBOL_STR(__get_user_pages_fast) },
	{ 0x7de40325, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x35140c95, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xa63d8153, __VMLINUX_SYMBOL_STR(drm_mm_insert_node_in_range_generic) },
	{ 0xe422ab4e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21df74d9, __VMLINUX_SYMBOL_STR(bitmap_set) },
	{ 0xb50988f0, __VMLINUX_SYMBOL_STR(component_match_add_release) },
	{ 0x10523c36, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xf2265855, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x30bff0d2, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x25fc5e9d, __VMLINUX_SYMBOL_STR(component_master_del) },
	{ 0x85e04b6c, __VMLINUX_SYMBOL_STR(fence_signal) },
	{ 0xadb29209, __VMLINUX_SYMBOL_STR(drm_mm_init_scan) },
	{ 0x7ebfd38d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8ceaa7db, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x7142b7db, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0x68c7936a, __VMLINUX_SYMBOL_STR(reservation_object_add_shared_fence) },
	{ 0xc52e1afa, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2a94172f, __VMLINUX_SYMBOL_STR(dma_get_required_mask) },
	{ 0xdf93b9d8, __VMLINUX_SYMBOL_STR(timespec64_to_jiffies) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xb2fa4edd, __VMLINUX_SYMBOL_STR(drm_mm_init) },
	{ 0x37d8a87c, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0xc5414778, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7cc34dce, __VMLINUX_SYMBOL_STR(drm_prime_pages_to_sg) },
	{ 0x21ba34fe, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xece19d40, __VMLINUX_SYMBOL_STR(drm_gem_object_unreference_unlocked) },
	{ 0xd969361, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xadc1a056, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x21c69336, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x1521bb1d, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0xd653d6b9, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0xb594fd5c, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0x36867a93, __VMLINUX_SYMBOL_STR(iommu_set_fault_handler) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec9248fd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x14ef8283, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x923e9d6d, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x30b775d6, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x242f031b, __VMLINUX_SYMBOL_STR(iommu_unmap) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xeed3cfc4, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd66bc9be, __VMLINUX_SYMBOL_STR(iommu_domain_free) },
	{ 0xe09e5a05, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x1fe46ac6, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0x82e81b77, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xe9852d6d, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0x271f58b4, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xc4b8b95f, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x6b542232, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0xf87311c8, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0x98c8c19e, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x7d701db0, __VMLINUX_SYMBOL_STR(drm_gem_prime_import) },
	{ 0xfa7a5f24, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xb2ee4b89, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x6069aca8, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x824304c, __VMLINUX_SYMBOL_STR(reservation_object_test_signaled_rcu) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1d3e8382, __VMLINUX_SYMBOL_STR(drm_gem_private_object_init) },
	{ 0x59aa14cf, __VMLINUX_SYMBOL_STR(fence_release) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xe7666bd2, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0xf51e33fc, __VMLINUX_SYMBOL_STR(get_user_pages_remote) },
	{ 0x26eb8f80, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xae80f69b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x878df41f, __VMLINUX_SYMBOL_STR(reservation_object_add_excl_fence) },
	{ 0xe9f2028c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcc1ffdb7, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0x7e28e654, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbb35290, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x6825d33c, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x28d6861d, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf3d7371c, __VMLINUX_SYMBOL_STR(dma_buf_mmap) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0xf22de5da, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e617cf7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x3a4bb7de, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0xa66edcd3, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0xa477a475, __VMLINUX_SYMBOL_STR(drm_debugfs_remove_files) },
	{ 0xc83fa618, __VMLINUX_SYMBOL_STR(drm_mm_takedown) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xca21e592, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xfe28137f, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x3e884f4b, __VMLINUX_SYMBOL_STR(vm_get_page_prot) },
	{ 0x3f1ffc84, __VMLINUX_SYMBOL_STR(drm_prime_sg_to_page_addr_arrays) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x18857082, __VMLINUX_SYMBOL_STR(component_master_add_with_match) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x4337603f, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x82771811, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2721d9d1, __VMLINUX_SYMBOL_STR(reservation_object_reserve_shared) },
	{ 0x68f255fb, __VMLINUX_SYMBOL_STR(fence_init) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x7a29a3fa, __VMLINUX_SYMBOL_STR(drm_mm_remove_node) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x75fd4e7e, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
	{ 0xcde2b093, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xd0b6d540, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x7d1db51c, __VMLINUX_SYMBOL_STR(drm_gem_get_pages) },
	{ 0xc451ddee, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3e5ea4df, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x5b78ad82, __VMLINUX_SYMBOL_STR(drm_mm_dump_table) },
	{ 0x6a2d4126, __VMLINUX_SYMBOL_STR(drm_mm_scan_remove_block) },
	{ 0x2e6dc0cf, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx-gpu-subsystem");
MODULE_ALIAS("of:N*T*Cfsl,imx-gpu-subsystemC*");
MODULE_ALIAS("of:N*T*Cmarvell,dove-gpu-subsystem");
MODULE_ALIAS("of:N*T*Cmarvell,dove-gpu-subsystemC*");
MODULE_ALIAS("of:N*T*Cvivante,gc-gpu-subsystem");
MODULE_ALIAS("of:N*T*Cvivante,gc-gpu-subsystemC*");
